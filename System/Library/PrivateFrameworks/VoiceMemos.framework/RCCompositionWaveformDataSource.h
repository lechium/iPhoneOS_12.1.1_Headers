/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveformDataSource.h>
#import <libobjc.A.dylib/RCWaveformDataSourceObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, _RCTimeRangeFileInputWaveformDataSource, RCComposition, NSOperationQueue, NSString;

@interface RCCompositionWaveformDataSource : RCWaveformDataSource <RCWaveformDataSourceObserver> {

	NSObject*<OS_dispatch_queue> _searialQueue;
	float _progressOfFinishedFragments;
	float _progressWeightPerFragment;
	_RCTimeRangeFileInputWaveformDataSource* _activeFragmentDataSource;
	BOOL _preferLoadingFragmentWaveforms;
	BOOL _saveGeneratedWaveform;
	BOOL _highlightLastDecomposedFragment;
	RCComposition* _composition;
	NSOperationQueue* _fragmentLoadingOperationQueue;

}

@property (nonatomic,retain) NSOperationQueue * fragmentLoadingOperationQueue;              //@synthesize fragmentLoadingOperationQueue=_fragmentLoadingOperationQueue - In the implementation block
@property (nonatomic,readonly) RCComposition * composition;                                 //@synthesize composition=_composition - In the implementation block
@property (nonatomic,readonly) BOOL preferLoadingFragmentWaveforms;                         //@synthesize preferLoadingFragmentWaveforms=_preferLoadingFragmentWaveforms - In the implementation block
@property (assign,nonatomic) BOOL saveGeneratedWaveform;                                    //@synthesize saveGeneratedWaveform=_saveGeneratedWaveform - In the implementation block
@property (assign,nonatomic) BOOL highlightLastDecomposedFragment;                          //@synthesize highlightLastDecomposedFragment=_highlightLastDecomposedFragment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fragmentLoadingOperationQueue;
-(RCComposition *)composition;
-(void)startLoading;
-(float)loadingProgress;
-(id)initWithComposition:(id)arg1 ;
-(void)waveformDataSourceDidFinishLoading:(id)arg1 ;
-(void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setSaveGeneratedWaveform:(BOOL)arg1 ;
-(BOOL)preferLoadingFragmentWaveforms;
-(id)saveableWaveform;
-(SCD_Struct_RC4)timeRangeToHighlight;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(SCD_Struct_RC4)arg1 ;
-(NSOperationQueue *)fragmentLoadingOperationQueue;
-(BOOL)_synchronouslyAppendSegmentsForAVContentURL:(id)arg1 isDecomposedFragment:(BOOL)arg2 sourceTimeRange:(SCD_Struct_RC4)arg3 destinationTime:(double)arg4 ;
-(BOOL)saveGeneratedWaveform;
-(BOOL)highlightLastDecomposedFragment;
-(void)setHighlightLastDecomposedFragment:(BOOL)arg1 ;
-(void)setFragmentLoadingOperationQueue:(NSOperationQueue *)arg1 ;
-(double)duration;
@end

