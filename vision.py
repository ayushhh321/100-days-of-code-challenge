import cv2
# Load the image
image = cv2.imread('image.jpg', 0)  # Replace 'image.jpg' with your image file
# Apply Canny edge detection
edges = cv2.Canny(image, 10, 20)  # Adjust the threshold values (100 and 200) as needed
# Display the original image and the detected edges
cv2.imshow('Original Image', image)
cv2.imshow('Edges', edges)
# Wait for a key press and then close the windows
cv2.waitKey(0)
cv2.destroyAllWindows()