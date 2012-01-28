//
//  LPNDElementWrapper.h
//  ProjectX
//
//  Created by Karl Krukow on 28/01/12.
//  Copyright (c) 2012 Danske Bank Group. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NDWebElement.h"
@interface LPNDElementWrapper : UIView

@property(nonatomic, retain) NDWebElement* webElement;
-(id) initWithElement:(NDWebElement*) element;

@end
