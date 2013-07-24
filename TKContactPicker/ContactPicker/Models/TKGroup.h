//
//  MainViewController.h
//  TKContactsMultiPicker
//
//  Created by Jongtae Ahn on 12. 8. 31..
//  Copyright (c) 2012년 TABKO Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>

@interface TKGroup : NSObject {
    ABRecordRef record;
}

@property NSInteger membersCount;
@property NSInteger recordID;
@property (nonatomic, copy) NSString *name;

@end