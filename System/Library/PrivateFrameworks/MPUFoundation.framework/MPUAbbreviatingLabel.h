/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSMutableArray, NSArray;

@interface MPUAbbreviatingLabel : UILabel {

	NSMutableArray* _textRepresentationSizes;
	NSArray* _textRepresentations;

}

@property (nonatomic,copy) NSArray * textRepresentations;              //@synthesize textRepresentations=_textRepresentations - In the implementation block
-(void)_calculateTextSizes;
-(void)_selectBestRepresentation;
-(void)_setTextRepresentation:(id)arg1 ;
-(void)setTextRepresentations:(NSArray *)arg1 ;
-(NSArray *)textRepresentations;
-(void)setFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAttributedText:(id)arg1 ;
@end
