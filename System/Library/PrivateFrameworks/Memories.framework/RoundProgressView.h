/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>

@interface RoundProgressView : UIView {

	double _progress;

}

@property (assign,nonatomic) double progress;                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) double displayedProgress; 
+(Class)layerClass;
-(double)displayedProgress;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(double)progress;
@end

