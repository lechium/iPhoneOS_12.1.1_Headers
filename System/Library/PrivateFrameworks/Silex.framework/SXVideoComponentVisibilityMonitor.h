/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SVVisibilityMonitor.h>
#import <libobjc.A.dylib/SXScrollObserving.h>

@class NSString;

@interface SXVideoComponentVisibilityMonitor : SVVisibilityMonitor <SXScrollObserving>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollingWillStart;
-(void)scrollingDidStop;
-(void)didScroll;
@end

