/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWStillImageProcessingStatusDelegate <NSObject>
@required
-(void)nodeDidCaptureStillImage:(id)arg1;
-(void)node:(id)arg1 didSelectReferenceFrameBracketedCaptureSequenceNumber:(id)arg2 pts:(SCD_Struct_BW2)arg3;
-(void)node:(id)arg1 didReceiveOriginalImageWithPTS:(SCD_Struct_BW2)arg2;

@end

