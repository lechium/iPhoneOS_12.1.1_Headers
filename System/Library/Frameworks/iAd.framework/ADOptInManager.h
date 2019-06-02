/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADAdServingDaemonConnectionDelegate.h>

@class ADAdServingDaemonConnection, NSString;

@interface ADOptInManager : NSObject <ADAdServingDaemonConnectionDelegate> {

	ADAdServingDaemonConnection* _connection;

}

@property (nonatomic,retain) ADAdServingDaemonConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)adServingDaemonMachServiceName;
-(void)configureConnection:(id)arg1 ;
-(void)getiAdIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)adServingDaemonConnectionInterrupted;
-(id)init;
-(void)dealloc;
-(ADAdServingDaemonConnection *)connection;
-(void)setConnection:(ADAdServingDaemonConnection *)arg1 ;
@end

