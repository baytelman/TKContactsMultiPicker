//
//  TKContact.h
//  TKContactsMultiPicker
//
//  Created by Jongtae Ahn on 12. 8. 31..
//  Copyright (c) 2012년 TABKO Inc. All rights reserved.
//

#import "TKContact.h"

@implementation TKContact


- (NSString*)sorterFirstName {
    if (nil != _firstName && ![_firstName isEqualToString:@""]) {
        return _firstName;
    }
    if (nil != _lastName && ![_lastName isEqualToString:@""]) {
        return _lastName;
    }
    if (nil != _name && ![_name isEqualToString:@""]) {
        return _name;
    }
    return @"zz";
}

- (NSString*)sorterLastName {
    if (nil != _lastName && ![_lastName isEqualToString:@""]) {
        return _lastName;
    }
    if (nil != _firstName && ![_firstName isEqualToString:@""]) {
        return _firstName;
    }
    if (nil != _name && ![_name isEqualToString:@""]) {
        return _name;
    }
    return @"zz";
}

@end
