//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DDLogFileManagerDefault.h"

@class NSString, PARSLogFileHandler;

@interface PARSLogFileManager : DDLogFileManagerDefault
{
    _Bool _uploadUnCompleteFeedbackLog;
    NSString *_logPath;
    NSString *_uploadPath;
    NSString *_reportId;
    NSString *_toZipFileName;
    PARSLogFileHandler *_logFileHandler;
}

+ (_Bool)createDirectoryAtPath:(id)arg1;
+ (id)defaultDirectory;
+ (id)defaultUploadPath;
+ (id)defaultLogPath;
@property(nonatomic) _Bool uploadUnCompleteFeedbackLog; // @synthesize uploadUnCompleteFeedbackLog=_uploadUnCompleteFeedbackLog;
@property(retain, nonatomic) PARSLogFileHandler *logFileHandler; // @synthesize logFileHandler=_logFileHandler;
@property(retain, nonatomic) NSString *toZipFileName; // @synthesize toZipFileName=_toZipFileName;
@property(retain, nonatomic) NSString *reportId; // @synthesize reportId=_reportId;
@property(readonly, nonatomic) NSString *uploadPath; // @synthesize uploadPath=_uploadPath;
@property(readonly, nonatomic) NSString *logPath; // @synthesize logPath=_logPath;
- (void).cxx_destruct;
- (_Bool)moveItemsAtPath:(id)arg1 toPath:(id)arg2;
- (void)uploadLogFilesWithResult:(CDUnknownBlockType)arg1;
- (void)deleteFilesWithPath:(id)arg1;
- (void)createZip;
- (void)mergeFile;
- (id)addLogFlagReportID:(id)arg1;
- (id)renameLogFile:(id)arg1;
- (id)logFileDateFormatter;
- (_Bool)isLogFile:(id)arg1;
- (id)newLogFileName;
- (void)uploadWithReportId:(id)arg1 autoUploadLog:(_Bool)arg2 uploadUnCompleteFeedbackLog:(_Bool)arg3 result:(CDUnknownBlockType)arg4;
- (id)init;

@end
