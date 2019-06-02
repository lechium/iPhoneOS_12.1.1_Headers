/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDProfile, NSString;

@interface HDAnalyticsWriter : NSObject {

	HDProfile* _profile;
	SecCertificateRef _certificate;
	NSString* _analyticsDirectory;

}
+(id)_payloadIdentifierForBugType:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)_createAnalyticsDirectory:(id)arg1 error:(id*)arg2 ;
-(BOOL)_cleanAnalyticsDirectory:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadCertificateWithError:(id*)arg1 ;
-(BOOL)submitJSONAnalyticsData:(id)arg1 bugType:(id)arg2 error:(id*)arg3 ;
-(id)URLForAnalyticsFileWithName:(id)arg1 ;
-(id)analyticsFilePathsWithError:(id*)arg1 ;
-(id)init;
@end
