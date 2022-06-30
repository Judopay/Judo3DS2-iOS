//
//  JP3DSCustomization.h
//  Judo3DS2_iOS
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import <Foundation/Foundation.h>

@interface JP3DSCustomization : NSObject <NSCopying>

/**
 * A method for setting up the font of the text
 *
 * @param textFontName - the name of the font to be applied to the text
 *
 * @throws JP3DSInvalidInputException - if either nil or an invalid type is passed instead of an NSString
 */
- (void)setTextFontName:(nonnull NSString *)textFontName;

/**
 * A method for setting up the color of the text
 *
 * @param textColor - the hexadecimal (ex: #FFFFFF) color value of the text
 *
 * @throws JP3DSInvalidInputException - if an invalid input is passed, or if the NSString does not represent a HEX color
 */
- (void)setTextColor:(nonnull NSString *)textColor;

/**
 * A method for setting up the font size of the text
 *
 * @param textFontSize - the font size of the text
 *
 * @throws JP3DSInvalidInputException - if an invalid input is passed, such as a 0 or negative font size
 */
- (void)setTextFontSize:(NSInteger)textFontSize;

/**
 * A method that returns the text font name
 *
 * @returns an NSString instance representing the font name of the text
 */
- (nonnull NSString *)getTextFontName;

/**
 * A method that returns the text color
 *
 * @returns an NSString instance representing the HEX color of the text
 */
- (nullable NSString *)getTextColor;

/**
 * A method that returns the text font size
 *
 * @returns an NSInteger value representing the font size
 */
- (NSInteger)getTextFontSize;

@end
