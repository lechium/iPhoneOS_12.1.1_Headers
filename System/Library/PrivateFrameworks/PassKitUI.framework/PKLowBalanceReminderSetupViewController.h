/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@protocol PKLowBalanceReminderSetupViewControllerDelegate;
@class PKPaymentPass, PKPaymentPassAction, PKEnteredValueActionItem, PKPassPreferencesManager, NSString, NSArray, NSDecimalNumber, NSNumberFormatter;

@interface PKLowBalanceReminderSetupViewController : UITableViewController {

	PKPaymentPass* _paymentPass;
	PKPaymentPassAction* _action;
	id<PKLowBalanceReminderSetupViewControllerDelegate> _delegate;
	PKEnteredValueActionItem* _topUpActionItem;
	PKPassPreferencesManager* _passPreferencesManager;
	NSString* _currencyCode;
	NSArray* _currencyAmountOptions;
	NSDecimalNumber* _selectedCurrencyAmount;
	NSNumberFormatter* _currencyAmountFormatter;

}

@property (nonatomic,retain) PKPaymentPass * paymentPass;                                                      //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) PKPaymentPassAction * action;                                                     //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) PKEnteredValueActionItem * topUpActionItem;                                       //@synthesize topUpActionItem=_topUpActionItem - In the implementation block
@property (nonatomic,retain) PKPassPreferencesManager * passPreferencesManager;                                //@synthesize passPreferencesManager=_passPreferencesManager - In the implementation block
@property (nonatomic,retain) NSString * currencyCode;                                                          //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSArray * currencyAmountOptions;                                                  //@synthesize currencyAmountOptions=_currencyAmountOptions - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * selectedCurrencyAmount;                                         //@synthesize selectedCurrencyAmount=_selectedCurrencyAmount - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * currencyAmountFormatter;                                      //@synthesize currencyAmountFormatter=_currencyAmountFormatter - In the implementation block
@property (assign,nonatomic,__weak) id<PKLowBalanceReminderSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSString *)currencyCode;
-(PKPaymentPass *)paymentPass;
-(id)_currencyAmountAtIndexPath:(id)arg1 ;
-(void)updateCheckmarkForSelectedCellAtIndexPath:(id)arg1 ;
-(id)_indexPathOfCurrencyAmount:(id)arg1 ;
-(id)initWithAction:(id)arg1 forPass:(id)arg2 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(PKEnteredValueActionItem *)topUpActionItem;
-(void)setTopUpActionItem:(PKEnteredValueActionItem *)arg1 ;
-(PKPassPreferencesManager *)passPreferencesManager;
-(void)setPassPreferencesManager:(PKPassPreferencesManager *)arg1 ;
-(NSArray *)currencyAmountOptions;
-(void)setCurrencyAmountOptions:(NSArray *)arg1 ;
-(NSDecimalNumber *)selectedCurrencyAmount;
-(void)setSelectedCurrencyAmount:(NSDecimalNumber *)arg1 ;
-(NSNumberFormatter *)currencyAmountFormatter;
-(void)setCurrencyAmountFormatter:(NSNumberFormatter *)arg1 ;
-(void)setDelegate:(id<PKLowBalanceReminderSetupViewControllerDelegate>)arg1 ;
-(id<PKLowBalanceReminderSetupViewControllerDelegate>)delegate;
-(PKPaymentPassAction *)action;
-(void)viewDidLoad;
-(void)setAction:(PKPaymentPassAction *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end

