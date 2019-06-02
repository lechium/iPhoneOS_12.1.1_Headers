/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, BBDataProviderConnection, BBDataProviderProxy, NSString;

@interface RTBBDataProvider : NSObject <BBRemoteDataProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	BBDataProviderConnection* _connection;
	BBDataProviderProxy* _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionIdentifier;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(id)sectionParameters;
-(void)postNotificationWithTitle:(id)arg1 message:(id)arg2 actionBundleId:(id)arg3 ;
-(id)init;
-(id)sortDescriptors;
@end

