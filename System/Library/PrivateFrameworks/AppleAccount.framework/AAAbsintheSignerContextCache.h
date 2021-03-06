/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, AAAbsintheContext;

@interface AAAbsintheSignerContextCache : NSObject {

	NSDate* _creationDate;
	AAAbsintheContext* _context;

}

@property (nonatomic,readonly) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) AAAbsintheContext * context;              //@synthesize context=_context - In the implementation block
+(id)cacheWithContext:(id)arg1 ;
-(NSDate *)creationDate;
-(id)init;
-(AAAbsintheContext *)context;
-(id)initWithContext:(id)arg1 ;
@end

