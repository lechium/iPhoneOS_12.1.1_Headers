/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class PKPaymentTransaction, UITableViewCell, NSDictionary;

@interface PKTransactionDebugDetailsViewController : UITableViewController {

	PKPaymentTransaction* _transaction;
	UITableViewCell* _mapsCell;
	NSDictionary* _transactionDetails;
	NSDictionary* _merchantDetails;

}

@property (nonatomic,retain) NSDictionary * transactionDetails;              //@synthesize transactionDetails=_transactionDetails - In the implementation block
@property (nonatomic,retain) NSDictionary * merchantDetails;                 //@synthesize merchantDetails=_merchantDetails - In the implementation block
-(BOOL)_hasMUID;
-(NSDictionary *)transactionDetails;
-(NSDictionary *)merchantDetails;
-(id)_transactionInfoCellForIndex:(long long)arg1 ;
-(id)_merchantInfoCellForIndex:(long long)arg1 ;
-(void)_didSelectMap;
-(id)_stringForTransactionStatus:(long long)arg1 ;
-(id)_stringForTransactionType:(long long)arg1 ;
-(id)_stringForTechnologyType:(long long)arg1 ;
-(id)_stringForTransactionSource:(unsigned long long)arg1 ;
-(id)_cellWithPrimaryText:(id)arg1 infoText:(id)arg2 ;
-(id)_mapsCell;
-(void)setTransactionDetails:(NSDictionary *)arg1 ;
-(void)setMerchantDetails:(NSDictionary *)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
@end
