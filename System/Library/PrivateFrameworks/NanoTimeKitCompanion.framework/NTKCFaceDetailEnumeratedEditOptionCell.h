/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NTKEditOption;

@interface NTKCFaceDetailEnumeratedEditOptionCell : NTKCDetailTableViewCell {

	BOOL _active;
	NTKEditOption* _editOption;

}

@property (nonatomic,readonly) NTKEditOption * editOption;              //@synthesize editOption=_editOption - In the implementation block
@property (assign,nonatomic) BOOL active;                               //@synthesize active=_active - In the implementation block
+(id)reuseIdentifier;
-(id)initWithEditOption:(id)arg1 ;
-(NTKEditOption *)editOption;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(double)rowHeight;
@end

