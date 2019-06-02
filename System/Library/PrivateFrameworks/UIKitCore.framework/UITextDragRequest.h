/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextDragRequest.h>
@class UITextRange, NSArray;


@protocol UITextDragRequest <NSObject>
@property (nonatomic,readonly) UITextRange * dragRange; 
@property (nonatomic,readonly) NSArray * suggestedItems; 
@property (nonatomic,readonly) NSArray * existingItems; 
@property (getter=isSelected,nonatomic,readonly) BOOL selected; 
@property (nonatomic,readonly) id<UIDragSession> dragSession; 
@required
-(BOOL)isSelected;
-(id<UIDragSession>)dragSession;
-(NSArray *)suggestedItems;
-(UITextRange *)dragRange;
-(NSArray *)existingItems;

@end


@protocol UIDragSession;
@class UITextRange, NSArray, NSString;

@interface UITextDragRequest : NSObject <UITextDragRequest> {

	BOOL _selected;
	UITextRange* _dragRange;
	NSArray* _existingItems;
	id<UIDragSession> _dragSession;
	NSArray* _suggestedItems;

}

@property (nonatomic,retain) NSArray * suggestedItems;                     //@synthesize suggestedItems=_suggestedItems - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITextRange * dragRange;                    //@synthesize dragRange=_dragRange - In the implementation block
@property (nonatomic,readonly) NSArray * existingItems;                    //@synthesize existingItems=_existingItems - In the implementation block
@property (nonatomic,readonly) id<UIDragSession> dragSession;              //@synthesize dragSession=_dragSession - In the implementation block
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(id<UIDragSession>)dragSession;
-(id)initWithRange:(id)arg1 inSession:(id)arg2 ;
-(void)setSuggestedItems:(NSArray *)arg1 ;
-(NSArray *)suggestedItems;
-(UITextRange *)dragRange;
-(NSArray *)existingItems;
@end

