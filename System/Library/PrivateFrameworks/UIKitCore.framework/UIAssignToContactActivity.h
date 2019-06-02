/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivity.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@class UIImage, CNContactPickerViewController, CNContact, UIImagePickerController, NSString;

@interface UIAssignToContactActivity : UIActivity <CNContactPickerDelegate, CNContactViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

	UIImage* _image;
	CNContactPickerViewController* _peoplePicker;
	CNContact* _person;
	UIImagePickerController* _imagePickerController;

}

@property (nonatomic,retain) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CNContactPickerViewController * peoplePicker;                 //@synthesize peoplePicker=_peoplePicker - In the implementation block
@property (nonatomic,retain) CNContact * person;                                           //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) UIImagePickerController * imagePickerController;              //@synthesize imagePickerController=_imagePickerController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_xpcAttributes;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)_cleanup;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)activityTitle;
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(id)_activityBundleImageConfiguration;
-(void)prepareWithActivityItems:(id)arg1 ;
-(CNContactPickerViewController *)peoplePicker;
-(void)setPeoplePicker:(CNContactPickerViewController *)arg1 ;
-(UIImagePickerController *)imagePickerController;
-(void)setImagePickerController:(UIImagePickerController *)arg1 ;
-(void)setPerson:(CNContact *)arg1 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(id)_embeddedActivityViewController;
-(void)_willPresentAsFormSheet;
-(CNContact *)person;
@end

