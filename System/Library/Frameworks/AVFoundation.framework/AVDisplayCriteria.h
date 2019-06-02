/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVDisplayCriteriaInternal;

@interface AVDisplayCriteria : NSObject <NSCopying> {

	AVDisplayCriteriaInternal* _displayCriteria;

}

@property (nonatomic,readonly) float refreshRate; 
@property (readonly) int videoDynamicRange; 
-(id)initWithRefreshRate:(float)arg1 videoDynamicRange:(int)arg2 ;
-(int)videoDynamicRange;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)refreshRate;
@end
