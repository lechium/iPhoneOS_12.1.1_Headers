/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DALDAP/LDAPTask.h>

@class NSString;

@interface LDAPGetDefaultSearchBaseTask : LDAPTask {

	NSString* _defaultNamingContext;

}

@property (nonatomic,retain) NSString * defaultNamingContext;              //@synthesize defaultNamingContext=_defaultNamingContext - In the implementation block
-(void)performTask;
-(id)daLevelErrorForLDAPError:(int)arg1 ;
-(void)_performQuery;
-(void)setDefaultNamingContext:(NSString *)arg1 ;
-(NSString *)defaultNamingContext;
-(void)finishWithError:(id)arg1 ;
-(int)numDownloadedElements;
@end

