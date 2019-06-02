/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@interface CoreDAVGetTask : CoreDAVTask {

	id _appSpecificDataItemResult;
	BOOL _forceNoCache;

}

@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) id appSpecificDataItemResult;                         //@synthesize appSpecificDataItemResult=_appSpecificDataItemResult - In the implementation block
@property (assign,nonatomic) BOOL forceNoCache;                                    //@synthesize forceNoCache=_forceNoCache - In the implementation block
-(unsigned long long)cachePolicy;
-(id)appSpecificDataItemResult;
-(BOOL)forceNoCache;
-(void)setForceNoCache:(BOOL)arg1 ;
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(void)setAppSpecificDataItemResult:(id)arg1 ;
-(id)description;
@end

