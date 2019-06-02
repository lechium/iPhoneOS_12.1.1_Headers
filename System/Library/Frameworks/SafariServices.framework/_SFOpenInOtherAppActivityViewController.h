/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFActivityViewController.h>

@class NSString;

@interface _SFOpenInOtherAppActivityViewController : _SFActivityViewController {

	NSString* _filePath;

}

@property (nonatomic,retain) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
+(BOOL)canOpenWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3 ;
+(id)_applicationsForDocumentProxy:(id)arg1 ;
+(id)_activityItemsForFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3 ;
-(id)initWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3 ;
-(void)_prepareActivity:(id)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
@end

