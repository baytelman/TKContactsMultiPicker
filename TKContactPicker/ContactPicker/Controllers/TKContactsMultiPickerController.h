//
//  TKContactsMultiPickerController.h
//  TKContactsMultiPicker
//
//  Created by Jongtae Ahn on 12. 8. 31..
//  Copyright (c) 2012년 TABKO Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>
#import <malloc/malloc.h>
#import "TKContact.h"
#import "TKGroup.h"

@class TKContact, TKContactsMultiPickerController;
@protocol TKContactsMultiPickerControllerDelegate <NSObject>
@optional
- (BOOL)tkContactsMultiPickerController:(TKContactsMultiPickerController*)picker
                   shouldIncludeContact:(TKContact*)contact
                        alreadyIncluded:(NSArray*)contacts;
@required
- (void)tkContactsMultiPickerController:(TKContactsMultiPickerController*)picker
                       didSelectContact:(TKContact*)contact;
- (void)tkContactsMultiPickerController:(TKContactsMultiPickerController*)picker didFinishPickingDataWithInfo:(NSArray*)contacts;
- (void)tkContactsMultiPickerControllerDidCancel:(TKContactsMultiPickerController*)picker;
@end


@interface TKContactsMultiPickerController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchDisplayDelegate, UISearchBarDelegate>
{    
}

@property (nonatomic, retain) id<TKContactsMultiPickerControllerDelegate> delegate;
@property (nonatomic, retain) IBOutlet UITableView *tableView;
@property (nonatomic, retain) IBOutlet UISearchBar *searchBar;
@property (nonatomic, retain) TKGroup *group;
@property (nonatomic, copy) NSString *savedSearchTerm;
@property (nonatomic) NSInteger savedScopeButtonIndex;
@property (nonatomic) BOOL searchWasActive;

- (id)initWithGroup:(TKGroup*)group;

@end
