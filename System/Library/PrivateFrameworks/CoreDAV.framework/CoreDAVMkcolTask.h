/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSSet, NSURL;

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask {

	NSSet* _propertiesToSet;
	BOOL _sendOrder;
	int _absoluteOrder;
	NSURL* _priorOrderedURL;

}

@property (nonatomic,retain) NSSet * propertiesToSet;                              //@synthesize propertiesToSet=_propertiesToSet - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) NSURL * priorOrderedURL;                              //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
@property (assign,nonatomic) int absoluteOrder;                                    //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
-(int)absoluteOrder;
-(void)setAbsoluteOrder:(int)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSURL *)priorOrderedURL;
-(NSSet *)propertiesToSet;
-(void)setPropertiesToSet:(NSSet *)arg1 ;
-(id)httpMethod;
-(id)requestBody;
-(id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)additionalHeaderValues;
-(id)description;
-(id)initWithURL:(id)arg1 ;
@end

