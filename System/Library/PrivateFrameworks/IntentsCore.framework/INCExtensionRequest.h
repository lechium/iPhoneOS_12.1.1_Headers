/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUUID, INWatchdogTimer, NSObject, NSOperationQueue, NSExtension, NSError, NSString, NSArray;

@interface INCExtensionRequest : NSObject {

	NSUUID* _requestIdentifier;
	INWatchdogTimer* _contextTimer;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _requestOperationQueue;
	BOOL _requiresTCC;
	NSExtension* _extension;
	NSError* _error;
	NSString* _identifier;
	NSArray* _extensionInputItems;

}

@property (nonatomic,retain) NSExtension * _extension;                   //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSError * _error;                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * extensionInputItems;              //@synthesize extensionInputItems=_extensionInputItems - In the implementation block
@property (assign,nonatomic) BOOL requiresTCC;                           //@synthesize requiresTCC=_requiresTCC - In the implementation block
+(void)initialize;
-(NSError *)_error;
-(void)setRequiresTCC:(BOOL)arg1 ;
-(void)_resetExtensionContextHostWithCompletion:(/*^block*/id)arg1 ;
-(id)_requestOperationQueue;
-(NSExtension *)_extension;
-(id)_extensionContextHost;
-(BOOL)requiresTCC;
-(void)_scheduleContextTimer;
-(void)_resetContextTimer;
-(void)setExtensionInputItems:(NSArray *)arg1 ;
-(void)startRequestForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)set_extension:(NSExtension *)arg1 ;
-(void)set_error:(NSError *)arg1 ;
-(NSArray *)extensionInputItems;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)reset;
-(id)initWithIdentifier:(id)arg1 ;
@end

