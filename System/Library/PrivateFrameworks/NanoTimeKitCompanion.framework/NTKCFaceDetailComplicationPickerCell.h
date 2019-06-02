/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@protocol NTKCFaceDetailComplicationPickerCellDelegate;
@class NSArray, NSString, UIPickerView, CAShapeLayer, NTKComplication;

@interface NTKCFaceDetailComplicationPickerCell : NTKCDetailTableViewCell <UIPickerViewDelegate, UIPickerViewDataSource> {

	long long _selectedIndex;
	BOOL _dateSlot;
	NSArray* _complications;
	NSString* _slot;
	id<NTKCFaceDetailComplicationPickerCellDelegate> _delegate;
	UIPickerView* _picker;
	CAShapeLayer* _selectionIndicator;

}

@property (nonatomic,retain) UIPickerView * picker;                                                         //@synthesize picker=_picker - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectionIndicator;                                             //@synthesize selectionIndicator=_selectionIndicator - In the implementation block
@property (nonatomic,readonly) NSArray * complications;                                                     //@synthesize complications=_complications - In the implementation block
@property (nonatomic,readonly) NSString * slot;                                                             //@synthesize slot=_slot - In the implementation block
@property (nonatomic,readonly) BOOL dateSlot;                                                               //@synthesize dateSlot=_dateSlot - In the implementation block
@property (nonatomic,retain) NTKComplication * selectedComplication; 
@property (assign,nonatomic,__weak) id<NTKCFaceDetailComplicationPickerCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)rowHeight;
+(id)reuseIdentifier;
-(NSString *)slot;
-(CAShapeLayer *)selectionIndicator;
-(void)setSelectionIndicator:(CAShapeLayer *)arg1 ;
-(NTKComplication *)selectedComplication;
-(BOOL)dateSlot;
-(void)setSelectedComplication:(NTKComplication *)arg1 ;
-(id)_nameForRow:(long long)arg1 ;
-(void)setComplications:(id)arg1 forSlot:(id)arg2 dateSlot:(BOOL)arg3 ;
-(NSArray *)complications;
-(id)init;
-(void)setDelegate:(id<NTKCFaceDetailComplicationPickerCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<NTKCFaceDetailComplicationPickerCellDelegate>)delegate;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(UIPickerView *)picker;
-(void)setPicker:(UIPickerView *)arg1 ;
@end
