//
//  JP3DSConfigParameters.h
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

@interface JP3DSConfigParameters : NSObject

/**
 * Adds a configuration parameter either to the specified group or to the default group.
 *
 * @param group - the group which the configuration parameter is to be added.
 * If a group is not specified, then the default group shall be used.
 * @param paramName - name of the configuration parameter.
 * @param paramValue - value of the configuration parameter.
 *
 * @throws JP3DSInvalidInputException - thrown if mandatory parameters are missing or if parameters are of invalid type,
 * as well if the parameter in a group is duplicate.
 */
- (void)addParamToGroup:(nullable NSString *)group
              paramName:(nonnull NSString *)paramName
             paramValue:(nonnull NSString *)paramValue;

/**
 * Returns a configuration parameter’s value either from the specified group or from the default group.
 *
 * @param group - the group which the configuration parameter is to be added.
 * If a group is not specified, then the default group shall be used.
 * @param paramName - name of the configuration parameter.
 *
 * @returns the parameter value, if it exists.
 *
 * @throws JP3DSInvalidInputException - thrown if mandatory parameters are missing or if parameters are of invalid type.
 */
- (nullable NSString *)getParamValueFromGroup:(nullable NSString *)group
                                    paramName:(nonnull NSString *)paramName;

/**
 * Removes a configuration parameter either from the specified group or from the default group.
 * It should return the value of the parameter that it removes.
 *
 * @param group - the group which the configuration parameter is to be added.
 * If a group is not specified, then the default group shall be used.
 * @param paramName - name of the configuration parameter.
 *
 * @returns the value of the parameter that it removes.
 * If the parameter is not found in the specified group, then this method returns nil.
 *
 * @throws JP3DSInvalidInputException - thrown if mandatory parameters are missing or if parameters are of invalid type.
 */
- (nullable NSString *)removeParamFromGroup:(nullable NSString *)group
                                  paramName:(nonnull NSString *)paramName;

@end
