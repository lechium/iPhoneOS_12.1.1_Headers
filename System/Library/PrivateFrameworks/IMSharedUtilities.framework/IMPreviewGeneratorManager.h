/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSDictionary;

@interface IMPreviewGeneratorManager : NSObject {

	NSDictionary* _UTITypes;
	NSDictionary* _dynamicTypes;

}

@property (nonatomic,copy) NSDictionary * UTITypes;                  //@synthesize UTITypes=_UTITypes - In the implementation block
@property (nonatomic,copy) NSDictionary * dynamicTypes;              //@synthesize dynamicTypes=_dynamicTypes - In the implementation block
+(id)previewGeneratorClasses;
+(id)sharedInstance;
-(void)setDynamicTypes:(NSDictionary *)arg1 ;
-(Class)_previewGeneratorClassForSourceURL:(id)arg1 ;
-(BOOL)movePreviewToDiskCache:(id)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
-(Class)_classForUTIType:(id)arg1 ;
-(NSDictionary *)dynamicTypes;
-(BOOL)generateAndPersistPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 previewConstraints:(IMPreviewConstraints)arg3 error:(id*)arg4 ;
-(NSDictionary *)UTITypes;
-(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
-(BOOL)persistPreviewToDiskCache:(CGImageRef)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(void)setUTITypes:(NSDictionary *)arg1 ;
@end

