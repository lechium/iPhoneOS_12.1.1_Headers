/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <UIKit/UITableViewDelegate.h>

@protocol PKPaymentSetupDisambiguationViewControllerDelegate;
@class NSArray, UIBarButtonItem, PKTableHeaderView, PKDisambiguationFooterView, PKPaymentSetupProduct, NSString;

@interface PKPaymentSetupDisambiguationViewController : PKPaymentSetupTableViewController <UITableViewDelegate> {

	NSArray* _products;
	UIBarButtonItem* _nextBarButtonItem;
	PKTableHeaderView* _headerView;
	PKDisambiguationFooterView* _footerView;
	id<PKPaymentSetupDisambiguationViewControllerDelegate> _delegate;
	PKPaymentSetupProduct* _selectedProduct;
	NSString* _enteredCardNumber;

}

@property (assign,nonatomic) id<PKPaymentSetupDisambiguationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * products;                                                           //@synthesize products=_products - In the implementation block
@property (nonatomic,retain,readonly) PKPaymentSetupProduct * selectedProduct;                             //@synthesize selectedProduct=_selectedProduct - In the implementation block
@property (nonatomic,copy) NSString * enteredCardNumber;                                                   //@synthesize enteredCardNumber=_enteredCardNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)products;
-(void)_setupLater:(id)arg1 ;
-(id)initWithProducts:(id)arg1 context:(long long)arg2 ;
-(void)_popToCameraCapture:(id)arg1 ;
-(id)_productAtIndexPath:(id)arg1 ;
-(void)_updateSelectedProduct:(id)arg1 ;
-(PKPaymentSetupProduct *)selectedProduct;
-(void)_notifyDelegateDidSelectProduct:(id)arg1 ;
-(void)setEnteredCardNumber:(NSString *)arg1 ;
-(void)setProducts:(NSArray *)arg1 ;
-(void)clearSelectedProduct;
-(NSString *)enteredCardNumber;
-(void)dealloc;
-(void)setDelegate:(id<PKPaymentSetupDisambiguationViewControllerDelegate>)arg1 ;
-(id<PKPaymentSetupDisambiguationViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_nextTapped:(id)arg1 ;
@end

