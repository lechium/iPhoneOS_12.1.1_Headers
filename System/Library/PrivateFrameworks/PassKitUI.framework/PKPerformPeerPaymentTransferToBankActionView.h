/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKEnterCurrencyAmountViewDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentAddBankAcountInformationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKEnterValueNewBalanceViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/PKPeerPaymentPerformActionView.h>

@protocol PKPerformActionViewDelegate;
@class PKPeerPaymentBankAccountInformation, PKPeerPaymentService, PKPeerPaymentAccount, NSDecimalNumber, NSNumberFormatter, PKEnterCurrencyAmountView, PKEnterValueNewBalanceView, PKContinuousButton, UILabel, UITableView, UIImageView, NSString, UITextField;

@interface PKPerformPeerPaymentTransferToBankActionView : UIView <PKEnterCurrencyAmountViewDelegate, PKPeerPaymentAddBankAcountInformationViewControllerDelegate, PKEnterValueNewBalanceViewDelegate, UITableViewDelegate, UITableViewDataSource, PKPeerPaymentPerformActionView> {

	PKPeerPaymentBankAccountInformation* _bankInformation;
	PKPeerPaymentService* _peerPaymentService;
	PKPeerPaymentAccount* _account;
	id<PKPerformActionViewDelegate> _delegate;
	NSDecimalNumber* _currentAmount;
	NSNumberFormatter* _currentAmountFormatter;
	PKEnterCurrencyAmountView* _enterCurrencyAmountView;
	PKEnterValueNewBalanceView* _newBalanceView;
	PKContinuousButton* _addAccountButton;
	UILabel* _addAccountDetailLabel;
	UITableView* _tableView;
	UIImageView* _checkmarkImageView;
	UILabel* _tranferTitleLabel;
	UILabel* _tranferMessageLabel;
	BOOL _transferComplete;
	NSDecimalNumber* _cardBalance;
	NSDecimalNumber* _minBalance;
	NSDecimalNumber* _maxBalance;
	NSDecimalNumber* _minLoadAmount;
	NSDecimalNumber* _maxLoadAmount;

}

@property (nonatomic,copy) NSDecimalNumber * cardBalance;                                  //@synthesize cardBalance=_cardBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minBalance;                                   //@synthesize minBalance=_minBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maxBalance;                                   //@synthesize maxBalance=_maxBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minLoadAmount;                                //@synthesize minLoadAmount=_minLoadAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maxLoadAmount;                                //@synthesize maxLoadAmount=_maxLoadAmount - In the implementation block
@property (assign,nonatomic) BOOL transferComplete;                                        //@synthesize transferComplete=_transferComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PKPerformActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * amountTextField; 
@property (nonatomic,retain) PKPeerPaymentAccount * account;                               //@synthesize account=_account - In the implementation block
-(void)_presentViewController:(id)arg1 ;
-(void)_createSubviews;
-(id)_checkmarkImageView;
-(PKPeerPaymentAccount *)account;
-(id)pass;
-(id)initWithAccount:(id)arg1 bankInformation:(id)arg2 ;
-(UITextField *)amountTextField;
-(void)willDismissViewController;
-(void)amountTextFieldShouldAcceptTouches:(BOOL)arg1 ;
-(id)transactionAmount;
-(id)transactionCurrency;
-(void)setTransferComplete:(BOOL)arg1 ;
-(void)presentAddBankAccountViewController;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1 ;
-(void)setMaxBalance:(NSDecimalNumber *)arg1 ;
-(void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(void)setMinBalance:(NSDecimalNumber *)arg1 ;
-(void)setMaxLoadAmount:(NSDecimalNumber *)arg1 ;
-(void)setMinLoadAmount:(NSDecimalNumber *)arg1 ;
-(BOOL)_isCurrentAmountValid;
-(void)setCardBalance:(NSDecimalNumber *)arg1 ;
-(void)_setRightBarButtonEnabledState;
-(void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(BOOL)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3 ;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg1 ;
-(id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3 ;
-(id)serviceProviderData;
-(void)saveLastInputValues;
-(NSDecimalNumber *)cardBalance;
-(NSDecimalNumber *)minBalance;
-(NSDecimalNumber *)maxBalance;
-(NSDecimalNumber *)minLoadAmount;
-(NSDecimalNumber *)maxLoadAmount;
-(void)didTapNewBalanceView;
-(id)_tranferTitleLabel;
-(id)_tranferMessageLabel;
-(id)_addAccountButton;
-(id)_addAccountDetailLabel;
-(BOOL)_shouldEnableMaxBalanceTransferButton;
-(void)_handleEditAccountInformationButtonPressed;
-(BOOL)_shouldShakeWithNewAmount:(id)arg1 ;
-(void)_addAccountInformation:(id)arg1 ;
-(BOOL)transferComplete;
-(void)setAccount:(PKPeerPaymentAccount *)arg1 ;
-(void)setDelegate:(id<PKPerformActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<PKPerformActionViewDelegate>)delegate;
-(void)willMoveToWindow:(id)arg1 ;
-(unsigned long long)_topPadding;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)_tableView;
@end

