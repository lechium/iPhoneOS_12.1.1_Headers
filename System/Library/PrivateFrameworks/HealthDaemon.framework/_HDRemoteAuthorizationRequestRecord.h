/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError, NSMutableArray;

@interface _HDRemoteAuthorizationRequestRecord : NSObject {

	BOOL _didRecieveShouldPrompt;
	BOOL _shouldPrompt;
	NSString* _bundleID;
	NSString* _hostAppName;
	NSError* _shouldPromptError;
	NSMutableArray* _records;

}

@property (nonatomic,copy,readonly) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL didRecieveShouldPrompt;              //@synthesize didRecieveShouldPrompt=_didRecieveShouldPrompt - In the implementation block
@property (assign,nonatomic) BOOL shouldPrompt;                        //@synthesize shouldPrompt=_shouldPrompt - In the implementation block
@property (nonatomic,copy) NSString * hostAppName;                     //@synthesize hostAppName=_hostAppName - In the implementation block
@property (nonatomic,copy) NSError * shouldPromptError;                //@synthesize shouldPromptError=_shouldPromptError - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                 //@synthesize records=_records - In the implementation block
-(void)setHostAppName:(NSString *)arg1 ;
-(void)setShouldPrompt:(BOOL)arg1 ;
-(BOOL)shouldPrompt;
-(NSString *)hostAppName;
-(id)initWithBundleID:(id)arg1 ;
-(BOOL)didRecieveShouldPrompt;
-(NSError *)shouldPromptError;
-(void)setDidRecieveShouldPrompt:(BOOL)arg1 ;
-(void)setShouldPromptError:(NSError *)arg1 ;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(NSString *)bundleID;
-(NSMutableArray *)records;
@end

