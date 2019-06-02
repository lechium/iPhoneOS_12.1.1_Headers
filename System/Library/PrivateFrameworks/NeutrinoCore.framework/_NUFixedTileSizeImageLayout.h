/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageLayout.h>

@interface _NUFixedTileSizeImageLayout : NUImageLayout {

	SCD_Struct_NU5 _tileSize;
	SCD_Struct_NU5 _borderSize;
	SCD_Struct_NU5 _tileCounts;

}
-(id)tileInfoAtIndex:(long long)arg1 ;
-(id)initWithImageSize:(SCD_Struct_NU5)arg1 tileSize:(SCD_Struct_NU5)arg2 borderSize:(SCD_Struct_NU5)arg3 ;
-(BOOL)isEqualToLayout:(id)arg1 ;
-(SCD_Struct_NU6)frameRectForTileAtIndex:(long long)arg1 ;
-(SCD_Struct_NU6)contentRectForTileAtIndex:(long long)arg1 ;
-(SCD_Struct_NU5)borderSize;
-(SCD_Struct_NU5)tileCounts;
-(long long)tileCount;
-(SCD_Struct_NU5)tileSize;
@end

