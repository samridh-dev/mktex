###############################################################################
### Makefile                                                                ###
###############################################################################

# --------------------------------------------------------------------------- #
# User Variables                                                              #
# --------------------------------------------------------------------------- #

PDFLATEX=pdflatex
TEX_DIR=src
OUTPUT_DIR=out

MAIN_TEX=$(TEX_DIR)/main.tex
TARGET=$(OUTPUT_DIR)/main.pdf

# --------------------------------------------------------------------------- #
# Rules                                                                       #
# --------------------------------------------------------------------------- #

# Phony targets for make commands
.PHONY: all clean

# Default target
all: $(TARGET)

# Rule to make the pdf
$(TARGET): $(MAIN_TEX)
	@mkdir -p $(OUTPUT_DIR)

	cd $(TEX_DIR) && $(PDFLATEX) -file-line-error -interaction=nonstopmode \
															 -output-directory=../$(OUTPUT_DIR) main.tex

	# Second run to update table of contents and references
	cd $(TEX_DIR) && $(PDFLATEX) -file-line-error -interaction=nonstopmode \
															 -output-directory=../$(OUTPUT_DIR) main.tex

# Clean the output directory
clean:
	@find $(OUTPUT_DIR) -type f ! -name 'README.md' -delete
	@find $(OUTPUT_DIR) -mindepth 1 -type d -exec rm -rf {} +

###############################################################################
### End                                                                     ###
###############################################################################
