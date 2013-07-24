//
//  TKContact.h
//  TKContactsMultiPicker
//
//  Created by Jongtae Ahn on 12. 8. 31..
//  Copyright (c) 2012년 TABKO Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TKContact : NSObject {
}

@property NSInteger sectionNumber;
@property NSInteger recordID;
@property BOOL rowSelected;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *tel;
@property (nonatomic, copy) UIImage *thumbnail;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *firstName;

- (NSString*)sorterFirstName;
- (NSString*)sorterLastName;

@end