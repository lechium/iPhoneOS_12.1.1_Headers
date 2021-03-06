/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPPlaybackContext.h>

@class NSArray;

@interface MPArrayPlaybackContext : MPPlaybackContext {

	NSArray* _items;

}

@property (nonatomic,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
+(Class)queueFeederClass;
+(BOOL)supportsSecureCoding;
-(id)initWithArrayQueueItems:(id)arg1 ;
-(id)descriptionComponents;
-(NSArray *)items;
@end

