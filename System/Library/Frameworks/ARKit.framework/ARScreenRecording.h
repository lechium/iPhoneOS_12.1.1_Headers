/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController;

@interface ARScreenRecording : NSObject {

	BOOL _saveInPhotosLibrary;
	UIViewController* _parentViewController;

}

@property (nonatomic,retain) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign,nonatomic) BOOL saveInPhotosLibrary;                             //@synthesize saveInPhotosLibrary=_saveInPhotosLibrary - In the implementation block
-(void)alertUserWithTitle:(id)arg1 message:(id)arg2 ;
-(BOOL)saveInPhotosLibrary;
-(void)setSaveInPhotosLibrary:(BOOL)arg1 ;
-(id)initWith:(id)arg1 ;
-(UIViewController *)parentViewController;
-(void)stop;
-(void)start;
-(void)setParentViewController:(UIViewController *)arg1 ;
@end

