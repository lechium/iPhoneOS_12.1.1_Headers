/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIImage;

@interface MFAttachmentImageGenerator : UIView {

	CGSize _textSize;
	NSString* _displayString;
	UIImage* _image;
	double _maxImageHeight;

}
+(id)pngDataForAttachment:(id)arg1 ;
+(CGRect)imageRectForAttachment:(id)arg1 ;
+(id)imageForAttachment:(id)arg1 ;
+(double)defaultHeight;
-(CGRect)imageRect;
-(void)dealloc;
-(id)image;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
@end
