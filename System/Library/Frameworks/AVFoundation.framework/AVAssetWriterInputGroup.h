/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAssetWriterInputGroupInternal, NSArray, AVAssetWriterInput;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup {

	AVAssetWriterInputGroupInternal* _internal;

}

@property (nonatomic,readonly) NSArray * provisionalInputs; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) AVAssetWriterInput * defaultInput; 
+(id)assetWriterInputGroupWithInputs:(id)arg1 defaultInput:(id)arg2 ;
+(id)assetWriterInputGroupWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3 ;
-(id)mediaSelectionOptionWithPropertyList:(id)arg1 ;
-(NSArray *)provisionalInputs;
-(AVAssetWriterInput *)defaultInput;
-(id)initWithInputs:(id)arg1 defaultInput:(id)arg2 ;
-(void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
-(void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
-(id)initWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3 ;
-(void)finalize;
-(NSArray *)inputs;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)options;
@end

