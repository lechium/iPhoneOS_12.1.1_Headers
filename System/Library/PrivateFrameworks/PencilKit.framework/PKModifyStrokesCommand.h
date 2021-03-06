/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKUndoCommand.h>

@class NSArray;

@interface PKModifyStrokesCommand : PKUndoCommand {

	BOOL _hide;
	NSArray* _strokes;
	CGAffineTransform _strokeTransform;

}

@property (nonatomic,readonly) NSArray * strokes;                              //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) NSArray * visibleStrokes; 
@property (nonatomic,readonly) BOOL hide;                                      //@synthesize hide=_hide - In the implementation block
@property (nonatomic,readonly) CGAffineTransform strokeTransform;              //@synthesize strokeTransform=_strokeTransform - In the implementation block
+(id)commandForMakingStrokeVisible:(id)arg1 drawing:(id)arg2 strokeTransform:(CGAffineTransform)arg3 ;
+(id)commandForErasingStrokes:(id)arg1 drawing:(id)arg2 ;
+(id)commandForMakingStrokesVisible:(id)arg1 drawing:(id)arg2 strokeTransform:(CGAffineTransform)arg3 ;
+(id)commandForErasingAllStrokesInDrawing:(id)arg1 ;
-(NSArray *)visibleStrokes;
-(CGAffineTransform)strokeTransform;
-(void)applyToDrawing:(id)arg1 ;
-(id)inverted;
-(void)registerWithUndoManager:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 hiding:(BOOL)arg4 strokeTransform:(CGAffineTransform)arg5 ;
-(id)description;
-(BOOL)hide;
-(NSArray *)strokes;
@end

