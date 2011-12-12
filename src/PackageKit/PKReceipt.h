/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/SDKs/MacOSX10.7.sdk
 */

#import <Cocoa/Cocoa.h>
#import "PKBOM.h"

@class NSMutableDictionary, NSString, NSArray;

@interface PKReceipt : NSObject
{
    NSMutableDictionary *_receiptDictionary;
    NSString *_bomPath;
    void *_cachedBOM;
    NSString *_bundlePath;
}

//+ (id)__findReceiptsFromBOMsDirectory:(id)arg1;
//+ (id)__findBundleReceiptsFromDirectory:(id)arg1;
//+ (id)_findReceiptsOnVolumeAtPath:(id)arg1;
//+ (id)_sharedReceiptsCache;
////+ (id)receiptsOnVolumeAtPath:(id)arg1;
//+ (id)receiptWithIdentifier:(id)arg1 volume:(id)arg2;
//+ (id)receiptWithPackageFileName:(id)arg1 volume:(id)arg2;
//+ (id)receiptsAtPath:(id)arg1;
//+ (void)_clearCache;
//+ (id)_receiptsDirectoryPathForDestination:(id)arg1;
//+ (id)_receiptsDirectoryPathForSandboxRoot:(id)arg1 destination:(id)arg2;
//+ (id)_searchDirectoriesForBOMReceiptsOnDestination:(id)arg1;
//+ (id)_searchDirectoriesForBundleReceiptsOnDestination:(id)arg1;
//+ (id)_receiptDictionaryPathFromBOMPath:(id)arg1;
//- (id)init;
//- (void)dealloc;
//- (id)initWithBOMPath:(id)arg1;
//- (id)initWithBundlePkgPath:(id)arg1;
//- (id)description;
////- (id)packageIdentifier;
//- (id)packageVersion;
//- (id)installDate;
//- (id)installProcessName;
////- (id)installPrefixPath;
//- (BOOL)_removeReceiptInDirectory:(id)arg1 error:(id *)arg2;
////- (id)packageGroups;
//- (void)_setPackageGroups:(id)arg1;
//- (id)_packageName;
//- (void)_setPackageName:(id)arg1;
//- (void)_setInstallProcessName:(id)arg1;
//- (void)_setInstallPrefixPath:(id)arg1;
//- (id)receiptStoragePaths;
////- (id)_BOM;
//- (void)_freeBOM;
//- (id)_directoryEnumerator;
//- (id)_attributesOfItemAtPath:(id)arg1;
//- (id)_SHA1ChecksumDataOfItemAtPath:(id)arg1;
//- (void)_setSHA1ChecksumData:(id)arg1 forItemAtPath:(id)arg2;
//- (id)_ACLStringOfItemAtPath:(id)arg1;
//- (void)_setACLString:(id)arg1 forItemAtPath:(id)arg2;
//- (BOOL)_updateSHA1ChecksumOfItemAtPath:(id)arg1 withFile:(id)arg2;
//- (BOOL)_updateACLsOfItemAtPath:(id)arg1 withFile:(id)arg2;

+ (NSArray *)receiptsOnVolumeAtPath:(NSString*)path;
- (NSString *)packageIdentifier;
- (NSString *)installPrefixPath;
- (NSArray *)packageGroups;
- (PKBOM *)_BOM;

@end

