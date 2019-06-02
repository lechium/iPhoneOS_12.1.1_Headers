/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPBarButtonDelegate.h>
#import <libobjc.A.dylib/CPBarButtonProviding.h>
#import <libobjc.A.dylib/CPControlDelegate.h>
#import <libobjc.A.dylib/CPTemplateDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CPBaseTemplateProviding, CPTemplateDelegate;
@class NSUUID, NSMutableArray, NSOperationQueue, NSString, NSArray;

@interface CPTemplate : NSObject <CPBarButtonDelegate, CPBarButtonProviding, CPControlDelegate, CPTemplateDelegate, NSSecureCoding> {

	id _userInfo;
	id<CPBaseTemplateProviding> _templateProvider;
	NSUUID* _identifier;
	id<CPTemplateDelegate> _templateDelegate;
	NSMutableArray* _internalLeadingBarButtons;
	NSMutableArray* _internalTrailingBarButtons;
	NSOperationQueue* _deferredOperationQueue;

}

@property (nonatomic,retain) id<CPBaseTemplateProviding> templateProvider;                //@synthesize templateProvider=_templateProvider - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<CPTemplateDelegate> templateDelegate;              //@synthesize templateDelegate=_templateDelegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * internalLeadingBarButtons;                  //@synthesize internalLeadingBarButtons=_internalLeadingBarButtons - In the implementation block
@property (nonatomic,retain) NSMutableArray * internalTrailingBarButtons;                 //@synthesize internalTrailingBarButtons=_internalTrailingBarButtons - In the implementation block
@property (nonatomic,retain) NSOperationQueue * deferredOperationQueue;                   //@synthesize deferredOperationQueue=_deferredOperationQueue - In the implementation block
@property (nonatomic,retain) id userInfo;                                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * leadingNavigationBarButtons; 
@property (nonatomic,retain) NSArray * trailingNavigationBarButtons; 
+(BOOL)supportsSecureCoding;
-(BOOL)control:(id)arg1 setEnabled:(BOOL)arg2 ;
-(NSArray *)leadingNavigationBarButtons;
-(NSArray *)trailingNavigationBarButtons;
-(id<CPBaseTemplateProviding>)templateProvider;
-(BOOL)barButton:(id)arg1 setImage:(id)arg2 ;
-(BOOL)barButton:(id)arg1 setTitle:(id)arg2 ;
-(NSOperationQueue *)deferredOperationQueue;
-(void)setInternalLeadingBarButtons:(NSMutableArray *)arg1 ;
-(void)setInternalTrailingBarButtons:(NSMutableArray *)arg1 ;
-(void)setDeferredOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setTemplateDelegate:(id<CPTemplateDelegate>)arg1 ;
-(id<CPTemplateDelegate>)templateDelegate;
-(void)setLeadingNavigationBarButtons:(NSArray *)arg1 ;
-(void)setTrailingNavigationBarButtons:(NSArray *)arg1 ;
-(void)setTemplateProvider:(id<CPBaseTemplateProviding>)arg1 ;
-(NSMutableArray *)internalLeadingBarButtons;
-(NSMutableArray *)internalTrailingBarButtons;
-(void)templateWillAppear:(id)arg1 animated:(BOOL)arg2 ;
-(void)templateDidAppear:(id)arg1 animated:(BOOL)arg2 ;
-(void)templateWillDisappear:(id)arg1 animated:(BOOL)arg2 ;
-(void)templateDidDisappear:(id)arg1 animated:(BOOL)arg2 ;
-(void)handleActionForControlIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSUUID *)identifier;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
@end
