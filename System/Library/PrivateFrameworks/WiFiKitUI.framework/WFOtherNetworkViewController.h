/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKitUI/WiFiKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/WFAccessoryViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol WFOtherNetworkViewControllerDelegate;
@class NSString, NSArray, NSOrderedSet, WFTextFieldCell, UIColor;

@interface WFOtherNetworkViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, WFAccessoryViewController, UITextFieldDelegate> {

	long long _firstResponder;
	BOOL _WAPIEnabled;
	BOOL _joining;
	BOOL _supportsWiFiPasswordSharing;
	BOOL _passwordRequired;
	BOOL _joinable;
	id<WFOtherNetworkViewControllerDelegate> _delegate;
	NSString* _networkName;
	long long _securityMode;
	NSString* _username;
	NSString* _password;
	NSString* _sharedPassword;
	long long _profileMode;
	SecIdentityRef _TLSIdentity;
	NSArray* _TLSIdentities;
	NSArray* _WAPIRootCertificates;
	id _WAPIRootCertificate;
	NSArray* _WAPIIdentities;
	id _WAPIIdentity;
	NSString* _details;
	long long _style;
	NSOrderedSet* _sections;
	NSOrderedSet* _securityRows;
	WFTextFieldCell* _nameCell;
	WFTextFieldCell* _usernameCell;
	WFTextFieldCell* _passwordCell;
	UIColor* _backgroundColor;
	long long _firstResponderCell;
	WFTextFieldCell* _mostRecentFirstResponder;

}

@property (assign) long long style;                                                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL joinable;                                                         //@synthesize joinable=_joinable - In the implementation block
@property (nonatomic,retain) NSOrderedSet * sections;                                               //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSOrderedSet * securityRows;                                           //@synthesize securityRows=_securityRows - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * nameCell;                                            //@synthesize nameCell=_nameCell - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * usernameCell;                                        //@synthesize usernameCell=_usernameCell - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * passwordCell;                                        //@synthesize passwordCell=_passwordCell - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                             //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long firstResponderCell;                                          //@synthesize firstResponderCell=_firstResponderCell - In the implementation block
@property (assign,nonatomic) WFTextFieldCell * mostRecentFirstResponder;                            //@synthesize mostRecentFirstResponder=_mostRecentFirstResponder - In the implementation block
@property (assign,nonatomic,__weak) id<WFOtherNetworkViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * networkName;                                                  //@synthesize networkName=_networkName - In the implementation block
@property (assign,nonatomic) long long securityMode;                                                //@synthesize securityMode=_securityMode - In the implementation block
@property (nonatomic,copy) NSString * username;                                                     //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                                     //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * sharedPassword;                                               //@synthesize sharedPassword=_sharedPassword - In the implementation block
@property (assign,nonatomic) long long profileMode;                                                 //@synthesize profileMode=_profileMode - In the implementation block
@property (assign,nonatomic) BOOL WAPIEnabled;                                                      //@synthesize WAPIEnabled=_WAPIEnabled - In the implementation block
@property (assign,nonatomic) SecIdentityRef TLSIdentity;                                            //@synthesize TLSIdentity=_TLSIdentity - In the implementation block
@property (nonatomic,retain) NSArray * TLSIdentities;                                               //@synthesize TLSIdentities=_TLSIdentities - In the implementation block
@property (nonatomic,retain) NSArray * WAPIRootCertificates;                                        //@synthesize WAPIRootCertificates=_WAPIRootCertificates - In the implementation block
@property (assign,nonatomic) id WAPIRootCertificate;                                                //@synthesize WAPIRootCertificate=_WAPIRootCertificate - In the implementation block
@property (nonatomic,retain) NSArray * WAPIIdentities;                                              //@synthesize WAPIIdentities=_WAPIIdentities - In the implementation block
@property (assign,nonatomic) id WAPIIdentity;                                                       //@synthesize WAPIIdentity=_WAPIIdentity - In the implementation block
@property (assign,nonatomic) BOOL joining;                                                          //@synthesize joining=_joining - In the implementation block
@property (assign,nonatomic) BOOL supportsWiFiPasswordSharing;                                      //@synthesize supportsWiFiPasswordSharing=_supportsWiFiPasswordSharing - In the implementation block
@property (nonatomic,retain) NSString * details;                                                    //@synthesize details=_details - In the implementation block
@property (assign,nonatomic) BOOL passwordRequired;                                                 //@synthesize passwordRequired=_passwordRequired - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)passwordRequired;
-(void)setPasswordRequired:(BOOL)arg1 ;
-(void)setDetails:(NSString *)arg1 ;
-(NSString *)details;
-(NSString *)networkName;
-(void)setNetworkName:(NSString *)arg1 ;
-(long long)securityMode;
-(void)setSecurityMode:(long long)arg1 ;
-(void)_updateSections;
-(void)_dismiss:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)_join:(id)arg1 ;
-(long long)firstResponderCell;
-(BOOL)joinable;
-(id)_sectionsForStyle:(long long)arg1 ;
-(id)_securityRowsForStyle:(long long)arg1 ;
-(void)_updateJoinable;
-(void)setFirstResponderCell:(long long)arg1 ;
-(void)keyboardShown:(id)arg1 ;
-(WFTextFieldCell *)usernameCell;
-(WFTextFieldCell *)passwordCell;
-(void)_scrollToCellAndBecomeFirstResponder:(id)arg1 ;
-(long long)profileMode;
-(long long)_returnKeyType;
-(BOOL)_isValidPassword:(id)arg1 ;
-(void)setSharedPassword:(NSString *)arg1 ;
-(BOOL)_canShowModes;
-(void)setSecurityRows:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)securityRows;
-(void)setWAPIIdentity:(id)arg1 ;
-(BOOL)joining;
-(id)_availableSecurityTitles;
-(id)_securityStringFromType:(long long)arg1 ;
-(long long)_securityModeFromTitle:(id)arg1 ;
-(void)_setTLSIdentity:(id)arg1 specifier:(id)arg2 ;
-(id)_getTLSIdentity:(id)arg1 ;
-(NSArray *)TLSIdentities;
-(void)_setWAPIIdentity:(id)arg1 specifier:(id)arg2 ;
-(id)_getWAPIIdentity:(id)arg1 ;
-(NSArray *)WAPIIdentities;
-(void)_setWAPIRootCertificate:(id)arg1 specifier:(id)arg2 ;
-(id)_getWAPIRootCertificate:(id)arg1 ;
-(NSArray *)WAPIRootCertificates;
-(id)_availableProfileModeTitles;
-(id)_profileModeStringFromType:(long long)arg1 ;
-(long long)_profileModeFromTitle:(id)arg1 ;
-(void)setProfileMode:(long long)arg1 ;
-(void)_setFirstResponderAfterCell:(id)arg1 ;
-(void)setUsernameCell:(WFTextFieldCell *)arg1 ;
-(void)setPasswordCell:(WFTextFieldCell *)arg1 ;
-(id)_TLSIdentityDescription;
-(id)_WAPIIdentityDescription;
-(id)_WAPIRootCertificateDescription;
-(id)_availableProfileModes;
-(BOOL)WAPIEnabled;
-(id)_availableSecurityModes;
-(WFTextFieldCell *)mostRecentFirstResponder;
-(void)setMostRecentFirstResponder:(WFTextFieldCell *)arg1 ;
-(WFTextFieldCell *)nameCell;
-(void)setNameCell:(WFTextFieldCell *)arg1 ;
-(void)orientationChanged:(id)arg1 ;
-(SecIdentityRef)TLSIdentity;
-(void)setTLSIdentity:(SecIdentityRef)arg1 ;
-(void)setJoining:(BOOL)arg1 ;
-(BOOL)supportsWiFiPasswordSharing;
-(id)WAPIRootCertificate;
-(void)setSupportsWiFiPasswordSharing:(BOOL)arg1 ;
-(void)passwordBecomeFirstResponder;
-(id)initWithOtherNetworkStyle:(long long)arg1 ;
-(void)setWAPIEnabled:(BOOL)arg1 ;
-(void)setTLSIdentities:(NSArray *)arg1 ;
-(void)setWAPIRootCertificates:(NSArray *)arg1 ;
-(void)setWAPIIdentities:(NSArray *)arg1 ;
-(id)WAPIIdentity;
-(void)setJoinable:(BOOL)arg1 ;
-(NSString *)sharedPassword;
-(void)enterPassword:(id)arg1 joinAfterDelay:(double)arg2 ;
-(void)setWAPIRootCertificate:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<WFOtherNetworkViewControllerDelegate>)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(id<WFOtherNetworkViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIColor *)backgroundColor;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSOrderedSet *)sections;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(NSString *)username;
-(NSString *)password;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)setSections:(NSOrderedSet *)arg1 ;
@end

