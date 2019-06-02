/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@class NSString;

@interface PKTitleQueryItem : NSObject {

	NSString* _transcribedTitle;
	CGRect _bounds;

}

@property (nonatomic,readonly) NSString * transcribedTitle;              //@synthesize transcribedTitle=_transcribedTitle - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                            //@synthesize bounds=_bounds - In the implementation block
-(NSString *)transcribedTitle;
-(id)initWithTranscribedTitle:(id)arg1 bounds:(CGRect)arg2 ;
-(CGRect)bounds;
@end

