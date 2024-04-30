//
//  JP3DSUICustomization.h
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
#import <Judo3DS2_iOS/JP3DSButtonType.h>

@class JP3DSButtonCustomization, JP3DSToolbarCustomization, JP3DSLabelCustomization, JP3DSTextBoxCustomization;

@interface JP3DSUICustomization : NSObject

/**
 * The default customization settings of the Challenge view.
 *
 * @returns an pre-configured instance of JP3DSUICustomization.
 */
+ (nonnull JP3DSUICustomization *)defaultCustomization;

/**
 * A method for configuring the toolbar customization properties
 *
 * @param toolbarCustomization - an instance of JP3DSToolbarCustomization responsible for setting up all toolbar
 * related parameters.
 *
 * @throws JP3DSInvalidInputException - if an invalid type is passed as a parameter
 */
- (void)setToolbarCustomization:(nonnull JP3DSToolbarCustomization *)toolbarCustomization;

/**
 * A method for obtaining the JP3DSToolbarCustomization instance responsible for toolbar customization
 *
 * @returns an instance of JP3DSToolbarCustomization, containing all toolbar customization parameters
 */
- (nullable JP3DSToolbarCustomization *)getToolbarCustomization;

/**
 * A method for configuring the label customization properties
 *
 * @param labelCustomization - an instance of JP3DSLabelCustomization responsible for setting up all label
 * related parameters.
 *
 * @throws JP3DSInvalidInputException - if an invalid type is passed as a parameter
 */
- (void)setLabelCustomization:(nonnull JP3DSLabelCustomization *)labelCustomization;

/**
 * A method for obtaining the JP3DSLabelCustomization instance responsible for label customization
 *
 * @returns an instance of JP3DSLabelCustomization, containing all label customization parameters
 */
- (nullable JP3DSLabelCustomization *)getLabelCustomization;

/**
 * A method for configuring the text box customization properties
 *
 * @param textBoxCustomization - an instance of JP3DSTextBoxCustomization responsible for setting up all text box
 * related parameters.
 *
 * @throws JP3DSInvalidInputException - if an invalid type is passed as a parameter
 */
- (void)setTextBoxCustomization:(nonnull JP3DSTextBoxCustomization *)textBoxCustomization;

/**
 * A method for obtaining the JP3DSTextBoxCustomization instance responsible for text box customization
 *
 * @returns an instance of JP3DSTextBoxCustomization, containing all text box customization parameters
 */
- (nullable JP3DSTextBoxCustomization *)getTextboxCustomization;

/**
 * A method for setting the customization properties for a specific button type.
 *
 * @param buttonCustomization - the customization object used to set the button style
 * @param buttonType - the button type to be customized
 *
 * @throws JP3DSInvalidInputException - if an invalid type is passed as a parameter
 */
- (void)setButtonCustomization:(nonnull JP3DSButtonCustomization *)buttonCustomization
                        ofType:(JP3DSButtonType)buttonType;

/**
 * A method for retrieving the customization properties for a specific button type.
 *
 * @param buttonType - the button type to be customized
 *
 * @returns an instance of JP3DSButtonCustomization or nil if no customization exists
 */
- (nullable JP3DSButtonCustomization *)getButtonCustomizationOfType:(JP3DSButtonType)buttonType;

/**
 * A method for setting the customization properties for a custom button type
 *
 * @param buttonCustomization - the customization object used to set the button style
 * @param customButtonType - the custom button type to be customized
 *
 * @throws JP3DSInvalidInputException - if an invalid type is passed as a parameter
 */
- (void)setButtonCustomization:(nonnull JP3DSButtonCustomization *)buttonCustomization
                  ofCustomType:(nonnull NSString *)customButtonType;

/**
 * A method for retrieving the customization properties for a custom button type.
 *
 * @param customButtonType - the custom button type to be customized
 *
 * @returns an instance of JP3DSButtonCustomization or nil if no customization exists
 */
- (nullable JP3DSButtonCustomization *)getButtonCustomizationOfCustomType:(nonnull NSString *)customButtonType;

@end
