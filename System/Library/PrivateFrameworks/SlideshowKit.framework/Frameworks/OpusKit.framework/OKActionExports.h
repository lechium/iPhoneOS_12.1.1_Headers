/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol OKActionExports <JSExport>
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) CGPoint location; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) unsigned long long touchCount; 
@property (nonatomic,readonly) unsigned long long platform; 
@property (nonatomic,retain,readonly) NSDictionary * context; 
@required
-(void)setContextObject:(id)arg1 forKey:(id)arg2;
-(unsigned long long)platform;
-(unsigned long long)state;
-(NSDictionary *)context;
-(double)timestamp;
-(CGPoint)location;
-(unsigned long long)touchCount;

@end

