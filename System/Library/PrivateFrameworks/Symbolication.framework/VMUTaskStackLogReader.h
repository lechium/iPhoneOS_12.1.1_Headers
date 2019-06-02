/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUStackLogReaderBase.h>
#import <libobjc.A.dylib/VMUStackLogReader.h>

@class VMUTaskMemoryScanner, NSString, VMUVMRegionTracker, NSSet;

@interface VMUTaskStackLogReader : VMUStackLogReaderBase <VMUStackLogReader> {

	VMUTaskMemoryScanner* _scanner;
	CSTypeRef _symbolicator;

}

@property (assign,nonatomic,__weak) VMUTaskMemoryScanner * scanner;              //@synthesize scanner=_scanner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned task; 
@property (readonly) BOOL is64bit; 
@property (readonly) BOOL inspectingLiveProcess; 
@property (readonly) BOOL usesLiteMode; 
@property (readonly) VMUVMRegionTracker * regionTracker; 
@property (nonatomic,retain) NSSet * excludedFrames; 
-(VMUTaskMemoryScanner *)scanner;
-(id)vmuVMRegionForAddress:(unsigned long long)arg1 ;
-(long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2 ;
-(long long)getFramesForNode:(unsigned)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long*)arg3 ;
-(id)binaryImagePathForPCaddress:(unsigned long long)arg1 ;
-(id)functionNameForPCaddress:(unsigned long long)arg1 ;
-(VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1 ;
-(VMURange)binaryImageRangeForPCaddress:(unsigned long long)arg1 ;
-(id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(BOOL)arg2 ;
-(int)enumerateRecords:(/*^block*/id)arg1 ;
-(long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long*)arg4 ;
-(id)sourcePathForPCaddress:(unsigned long long)arg1 ;
-(id)sourceFileNameForPCaddress:(unsigned long long)arg1 ;
-(unsigned)sourceLineNumberForPCaddress:(unsigned long long)arg1 ;
-(BOOL)inspectingLiveProcess;
-(VMUVMRegionTracker *)regionTracker;
-(unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
-(unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1 ;
-(id)initWithTask:(unsigned)arg1 symbolicator:(CSTypeRef)arg2 ;
-(void)setScanner:(VMUTaskMemoryScanner *)arg1 ;
-(BOOL)is64bit;
-(void)dealloc;
-(id)initWithTask:(unsigned)arg1 ;
@end

