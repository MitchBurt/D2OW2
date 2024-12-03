import os
from PIL import Image

def extract_palette_to_jasc(folder_path):
    if not os.path.exists(folder_path):
        print(f"Folder '{folder_path}' does not exist.")
        return

    output_folder = os.path.join(folder_path, "palettes")
    os.makedirs(output_folder, exist_ok=True)
    
    for filename in os.listdir(folder_path):
        if filename.lower().endswith(".png"):
            filepath = os.path.join(folder_path, filename)
            try:
                # Open the image
                img = Image.open(filepath).convert("P")
                
                # Get the palette
                palette = img.getpalette()[:768]  # First 256 colors (R, G, B)
                
                # Remove duplicates if fewer than 256 colors are used
                unique_colors = [
                    tuple(palette[i:i + 3])
                    for i in range(0, len(palette), 3)
                ]
                unique_colors = unique_colors[:img.getcolors()[0][0]]
                
                # Create the JASC PAL format
                pal_content = ["JASC-PAL"]
                pal_content.append("0100")  # Version
                pal_content.append(str(len(unique_colors)))
                pal_content.extend(
                    f"{r} {g} {b}" for r, g, b in unique_colors
                )
                
                # Save to a .pal file with a final newline
                pal_filename = os.path.splitext(filename)[0] + ".pal"
                pal_filepath = os.path.join(output_folder, pal_filename)
                with open(pal_filepath, "w", newline="\n") as pal_file:
                    pal_file.write("\n".join(pal_content) + "\n")  # Add final newline
                
                print(f"Palette saved for '{filename}' as '{pal_filename}'.")
            except Exception as e:
                print(f"Failed to process '{filename}': {e}")

if __name__ == "__main__":
    folder = input("Enter the folder path containing PNG files: ")
    extract_palette_to_jasc(folder)
