//
//  JP3DSLabelCustomization.h
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
#import <Judo3DS2_iOS/JP3DSCustomization.h>

@interface JP3DSLabelCustomization : JP3DSCustomization <NSCopying>

/**
 * A method for setting the label's heading text color
 *
 * @param headingTextColor - the HEX value of the heading text color
 *
 * @throws JP3DSInvalidInputException - if the parameter is not a valid HEX color value
 */
- (void)setHeadingTextColor:(nonnull NSString *)headingTextColor;

/**
 * A method for getting the label's heading text color
 *
 * @returns the HEX color value of the heading text
 */
- (nullable NSString *)getHeadingTextColor;

/**
 * A method for setting up the font of the heading text
 *
 * @param headingTextFontName - the name of the font to be applied to the heading text
 *
 * @throws JP3DSInvalidInputException - if either nil or an invalid type is passed instead of an NSString
 */
- (void)setHeadingTextFontName:(nonnull NSString *)headingTextFontName;

/**
 * A method that returns the heading text font name
 *
 * @returns an NSString instance representing the font name of the text
 */
- (nonnull NSString *)getHeadingTextFontName;

/**
 * A method for setting up the font size of the heading text
 *
 * @param headingTextFontSize - the font size of the heading text
 *
 * @throws JP3DSInvalidInputException - if an invalid input is passed, such as a 0 or negative font size
 */
- (void)setHeadingTextFontSize:(NSInteger)headingTextFontSize;

/**
 * A method that returns the heading text font size
 *
 * @returns an NSInteger value representing the heading font size
 */
- (NSInteger)getHeadingTextFontSize;

@end
