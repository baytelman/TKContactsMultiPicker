//
//  MainViewController.h
//  TKContactsMultiPicker
//
//  Created by Jongtae Ahn on 12. 8. 31..
//  Copyright (c) 2012년 TABKO Inc. All rights reserved.
//

#import "TKGroup.h"

@implementation TKGroup

- (void)dealloc
{
    if (record) CFRelease(record);
}

@end
