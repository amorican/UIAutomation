/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@interface UIAPickerWheel : UIAElement
{
}

- (id)elements;
- (id)values;
- (BOOL)_spinWheel:(int)arg1;
- (void)selectValue:(id)arg1;

@end