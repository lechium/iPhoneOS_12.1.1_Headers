/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/AVTDiscardableContent.h>

@class UIView, AVTAttributeValueView, NSString;

@interface AVTAttributeCollectionViewCell : UICollectionViewCell <AVTDiscardableContent> {

	/*^block*/id discardableContentHandler;
	UIView* _attributeView;

}

@property (nonatomic,retain) UIView * attributeView;                           //@synthesize attributeView=_attributeView - In the implementation block
@property (nonatomic,readonly) AVTAttributeValueView * valueView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id discardableContentHandler; 
+(id)cellIdentifier;
-(void)setAttributeView:(UIView *)arg1 ;
-(void)discardContent;
-(void)setDiscardableContentHandler:(id)arg1 ;
-(UIView *)attributeView;
-(id)discardableContentHandler;
-(void)prepareForReuse;
-(AVTAttributeValueView *)valueView;
@end

