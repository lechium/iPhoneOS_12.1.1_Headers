/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSSet;

@interface CalDAVMkcalendarTask : CoreDAVTask {

	NSSet* _setElements;

}

@property (nonatomic,retain) NSSet * setElements;                                                         //@synthesize setElements=_setElements - In the implementation block
@property (assign,nonatomic) id<CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> delegate; 
-(id)httpMethod;
-(id)requestBody;
-(id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2 ;
-(void)setSupportForEvents:(BOOL)arg1 tasks:(BOOL)arg2 ;
-(void)setSetElements:(NSSet *)arg1 ;
-(NSSet *)setElements;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)description;
-(id)initWithURL:(id)arg1 ;
@end

